#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class Build_VERSION : public JObject
	{
	public:
		// Fields
		static jstring BASE_OS();
		static jstring CODENAME();
		static jstring INCREMENTAL();
		static jint MEDIA_PERFORMANCE_CLASS();
		static jint PREVIEW_SDK_INT();
		static jstring RELEASE();
		static jstring RELEASE_OR_CODENAME();
		static jstring SDK();
		static jint SDK_INT();
		static jstring SECURITY_PATCH();
		
		// QJniObject forward
		template<typename ...Ts> explicit Build_VERSION(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Build_VERSION(QJniObject obj);
		
		// Constructors
		Build_VERSION();
		
		// Methods
	};
} // namespace android::os

