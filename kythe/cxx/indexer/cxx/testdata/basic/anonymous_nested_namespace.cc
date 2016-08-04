// The anonymous namespace is common among headers but distinct in TUs.
#pragma kythe_claim
#include "header.h"
namespace Ns {
namespace {
//- @namespace defines/binding CcNamespace
namespace { }
}
}
#include "footer.h"

#example header.h
#pragma kythe_claim
namespace Ns {
namespace {
//- @namespace=HeaderDecl defines/binding HNamespace
//- !{ HeaderDecl defines/binding CcNamespace }
namespace { }
}
}

#example footer.h
#pragma kythe_claim
namespace Ns {
namespace {
//- @namespace=FooterDecl defines/binding HNamespace
//- !{ FooterDecl defines/binding CcNamespace }
namespace { }
}
}
