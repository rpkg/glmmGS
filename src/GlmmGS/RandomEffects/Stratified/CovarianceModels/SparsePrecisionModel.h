#ifndef GLMMGS_RANDOMEFFECTS_STRATIFIED_COVARIANCE_MODELS_SPARSEPRECISIONMODEL_H
#define GLMMGS_RANDOMEFFECTS_STRATIFIED_COVARIANCE_MODELS_SPARSEPRECISIONMODEL_H

#include "../../../Standard.h"
#include "../../Working/Stratified/CovarianceModels/ICovarianceModel.h"
#include "ICovarianceModel.h"

namespace GlmmGS
{
	namespace RandomEffects
	{
		namespace Stratified
		{
			namespace CovarianceModels
			{
				// SparsePrecisionModel
				class SparsePrecisionModel : public ICovarianceModel
				{
				private:
					// Fields
					int nvars;
					const LDL::SparseMatrix<double> precision;

					// Implementation
					Pointer<Working::Stratified::CovarianceModels::ICovarianceModel> CreateWorking() const;

				public:
					// Construction
					SparsePrecisionModel(int nvars, const LDL::SparseMatrix<double> precision);
					~SparsePrecisionModel();
				};
			}
		}
	}
}

#endif
