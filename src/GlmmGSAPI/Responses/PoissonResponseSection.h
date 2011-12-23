#pragma once

#include "../Standard.h"
#include "../Section.h"

namespace GlmmGSAPI
{
	namespace Responses
	{
		// PoissonResponseSection
		class PoissonResponseSection : public Section
		{
		private:
			// Fields
			Pointer<WeakVector<const int> > values;
			Pointer<WeakVector<const int> > counts;

			// Implementation
			void AddResponse(WeakVector<const int> values);
			void EndResponse();

		public:
			// Construction
			PoissonResponseSection(GlmmGSAPI & api);
			~PoissonResponseSection();
		};
	}
}