#pragma once

#include "./BaseObj.hpp"

class JIntArray;
class JArray;
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
class JString;

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
		void bindAllocation(android::renderscript::Allocation arg0, jint arg1) const;
		jboolean getVarB(jint arg0) const;
		jdouble getVarD(jint arg0) const;
		jfloat getVarF(jint arg0) const;
		jint getVarI(jint arg0) const;
		jlong getVarJ(jint arg0) const;
		void getVarV(jint arg0, android::renderscript::FieldPacker arg1) const;
		void setTimeZone(JString arg0) const;
		void setVar(jint arg0, android::renderscript::BaseObj arg1) const;
		void setVar(jint arg0, android::renderscript::FieldPacker arg1) const;
		void setVar(jint arg0, jboolean arg1) const;
		void setVar(jint arg0, jdouble arg1) const;
		void setVar(jint arg0, jfloat arg1) const;
		void setVar(jint arg0, jint arg1) const;
		void setVar(jint arg0, jlong arg1) const;
		void setVar(jint arg0, android::renderscript::FieldPacker arg1, android::renderscript::Element arg2, JIntArray arg3) const;
	};
} // namespace android::renderscript

