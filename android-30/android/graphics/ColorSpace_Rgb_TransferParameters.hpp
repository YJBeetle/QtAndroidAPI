#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::graphics
{
	class ColorSpace_Rgb_TransferParameters : public JObject
	{
	public:
		// Fields
		jdouble a();
		jdouble b();
		jdouble c();
		jdouble d();
		jdouble e();
		jdouble f();
		jdouble g();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Rgb_TransferParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Rgb_TransferParameters(QAndroidJniObject obj);
		
		// Constructors
		ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4);
		ColorSpace_Rgb_TransferParameters(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5, jdouble arg6);
		
		// Methods
		jboolean equals(JObject arg0);
		jint hashCode();
	};
} // namespace android::graphics

