#pragma once

#include "../../JObject.hpp"


namespace android::renderscript
{
	class Float2 : public JObject
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Float2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Float2(QAndroidJniObject obj);
		
		// Constructors
		Float2();
		Float2(jfloat arg0, jfloat arg1);
		
		// Methods
	};
} // namespace android::renderscript

