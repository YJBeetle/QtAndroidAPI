#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class SizeF : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SizeF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SizeF(QAndroidJniObject obj);
		
		// Constructors
		SizeF(jfloat arg0, jfloat arg1);
		
		// Methods
		static android::util::SizeF parseSizeF(jstring arg0);
		jboolean equals(jobject arg0);
		jfloat getHeight();
		jfloat getWidth();
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

