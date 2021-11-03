#pragma once

#include "../../JObject.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	class Allocation;
}
namespace android::renderscript
{
	class BaseObj;
}
namespace android::renderscript
{
	class Element;
}
namespace android::renderscript
{
	class FieldPacker;
}
namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Script_FieldID;
}
namespace android::renderscript
{
	class Script_InvokeID;
}
namespace android::renderscript
{
	class Script_KernelID;
}
namespace android::renderscript
{
	class Script_LaunchOptions;
}

namespace android::renderscript
{
	class Script : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Script(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Script(QJniObject obj);
		
		// Constructors
		
		// Methods
		void bindAllocation(android::renderscript::Allocation arg0, jint arg1);
		jboolean getVarB(jint arg0);
		jdouble getVarD(jint arg0);
		jfloat getVarF(jint arg0);
		jint getVarI(jint arg0);
		jlong getVarJ(jint arg0);
		void getVarV(jint arg0, android::renderscript::FieldPacker arg1);
		void setTimeZone(jstring arg0);
		void setVar(jint arg0, android::renderscript::BaseObj arg1);
		void setVar(jint arg0, android::renderscript::FieldPacker arg1);
		void setVar(jint arg0, jboolean arg1);
		void setVar(jint arg0, jdouble arg1);
		void setVar(jint arg0, jfloat arg1);
		void setVar(jint arg0, jint arg1);
		void setVar(jint arg0, jlong arg1);
		void setVar(jint arg0, android::renderscript::FieldPacker arg1, android::renderscript::Element arg2, jintArray arg3);
	};
} // namespace android::renderscript

