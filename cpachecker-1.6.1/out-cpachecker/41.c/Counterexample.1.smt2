(declare-fun |main::n@2| () Int)
(declare-fun |main::z@2| () Int)
(declare-fun |main::j@3| () Int)
(declare-fun |main::i@3| () Int)
(declare-fun |main::k@3| () Int)
(declare-fun |main::j@2| () Int)
(declare-fun |main::i@2| () Int)
(declare-fun __VERIFIER_nondet_int@2 () Int)
(declare-fun |main::flag@2| () Int)
(declare-fun |main::k@2| () Int)
(declare-fun |__VERIFIER_assume::i@2| () Int)
(declare-fun |main::flag__param__@1| () Int)
(declare-fun |main::n__param__@1| () Int)
(assert (and (= |main::n@2| |main::n__param__@1|) (= |main::flag@2| |main::flag__param__@1|) (= |__VERIFIER_assume::i@2| (ite (>= |main::n@2| 0) 1 0)) (not (= |__VERIFIER_assume::i@2| 0)) (= |main::k@2| 1) (not (= |main::flag@2| 0)) (= |main::k@3| __VERIFIER_nondet_int@2) (= |main::i@2| 0) (= |main::j@2| 0) (<= |main::i@2| |main::n@2|) (= |main::i@3| (+ |main::i@2| 1)) (= |main::j@3| (+ |main::j@2| |main::i@3|)) (not (<= |main::i@3| |main::n@2|)) (= |main::z@2| (+ (+ |main::k@3| |main::i@3|) |main::j@3|)) (not (> |main::z@2| (* 2 |main::n@2|)))))