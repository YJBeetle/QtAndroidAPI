#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
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
		AllocationAdapter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject create1D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1);
		static QAndroidJniObject create2D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1);
		static QAndroidJniObject createTyped(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1, android::renderscript::Type arg2);
		void resize(jint arg0);
		void setFace(android::renderscript::Type_CubemapFace arg0);
		void setLOD(jint arg0);
		void setX(jint arg0);
		void setY(jint arg0);
		void setZ(jint arg0);
	};
} // namespace android::renderscript

