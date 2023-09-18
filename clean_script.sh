for d in *; do
  if [ -d "$d" ]; then         # or:  if test -d "$d"; then
    ( cd "$d" && make clean )
  fi
done
