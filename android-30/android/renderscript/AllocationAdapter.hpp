#pragma once

#include "./Allocation.hpp"

namespace android::renderscript
{
	class Allocation;
}
namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Type;
}
namespace android::renderscript
{
	class Type_CubemapFace;
}

namespace android::renderscript
{
	class AllocationAdapter : public android::renderscript::Allocation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AllocationAdapter(const char *className, const char *sig, Ts...agv) : android::renderscript::Allocation(className, sig, std::forward<Ts>(agv)...) {}
		AllocationAdapter(QAndroidJniObject obj) : android::renderscript::Allocation(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::AllocationAdapter create1D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1);
		static android::renderscript::AllocationAdapter create2D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1);
		static android::renderscript::AllocationAdapter createTyped(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1, android::renderscript::Type arg2);
		void resize(jint arg0) const;
		void setFace(android::renderscript::Type_CubemapFace arg0) const;
		void setLOD(jint arg0) const;
		void setX(jint arg0) const;
		void setY(jint arg0) const;
		void setZ(jint arg0) const;
	};
} // namespace android::renderscript

