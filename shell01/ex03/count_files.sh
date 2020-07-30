find . -type f -o -type d -a -not -path  "*/\.*" | wc -l | sed 's_ __g'
