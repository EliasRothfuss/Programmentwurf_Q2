add_test( DeveloperTest.TestInitialisation /root/projects/Programmentwurf_Q2/build/tests [==[--gtest_filter=DeveloperTest.TestInitialisation]==] --gtest_also_run_disabled_tests)
set_tests_properties( DeveloperTest.TestInitialisation PROPERTIES WORKING_DIRECTORY /root/projects/Programmentwurf_Q2/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( tests_TESTS DeveloperTest.TestInitialisation)
