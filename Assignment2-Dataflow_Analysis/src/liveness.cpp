#include "dfa/framework.h"

// @TODO 

namespace {
class Liveness : public FunctionPass
{
public:
        static char ID;

        Liveness() : FunctionPass(ID) {}
        virtual ~Liveness() override {}

        // @TODO Add or remove method definitions if necessary.
        
        virtual void getAnalysisUsage(AnalysisUsage & AU) const override final
        {
                AU.setPreservesAll();
        }

        virtual bool runOnFunction(Function & func) override final
        {
                return false;
        }
};

char Liveness::ID = 1; 
RegisterPass < Liveness > Y ("liveness", "Liveness");

} // namespace anonymous
