#pragma once

#include "../../JObject.hpp"

namespace android::renderscript
{
	class Long3 : public JObject
	{
	public:
		// Fields
		jlong x();
		jlong y();
		jlong z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Long3(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Long3(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Long3();
		Long3(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::renderscript

