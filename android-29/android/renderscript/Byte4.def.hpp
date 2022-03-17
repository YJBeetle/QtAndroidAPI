#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Byte4 : public JObject
	{
	public:
		// Fields
		jbyte w();
		jbyte x();
		jbyte y();
		jbyte z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Byte4(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Byte4(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Byte4();
		Byte4(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3);
		
		// Methods
	};
} // namespace android::renderscript

