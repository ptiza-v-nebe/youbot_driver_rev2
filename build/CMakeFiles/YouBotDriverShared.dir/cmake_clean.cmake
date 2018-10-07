file(REMOVE_RECURSE
  "libYouBotDriver.pdb"
  "libYouBotDriver.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/YouBotDriverShared.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
