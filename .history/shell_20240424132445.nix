let
   pkgs = import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/nixos-23.11.tar.gz") {};
   golang = pkgs.go; 
  #  ps = import ./purescript.nix { inherit pkgs; };
in
pkgs.mkShell {

  buildInputs = [];
  NIX_PATH = "nixpkgs=" + pkgs.path;
  shellHook = ''
    npm install spago
    npm install purs-tidy
    npm install --save-exact esbuild
    npm install @openapitools/openapi-generator-cli -D
    npm install js-beautify
    npm install querystring
    npm install superagent
    npm install crypto-js
    npm install @fingerprintjs/fingerprintjs
    npm install --save string-pixel-width
    export PATH=${ps}:/node_modules/.bin:$PATH
   '';
  }