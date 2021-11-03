#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}

namespace android::app::appsearch
{
	class GenericDocument_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GenericDocument_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GenericDocument_Builder(QAndroidJniObject obj);
		
		// Constructors
		GenericDocument_Builder(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		android::app::appsearch::GenericDocument build();
		android::app::appsearch::GenericDocument_Builder setCreationTimestampMillis(jlong arg0);
		android::app::appsearch::GenericDocument_Builder setPropertyBoolean(jstring arg0, jbooleanArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyBytes(jstring arg0, jarray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyDocument(jstring arg0, jarray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyDouble(jstring arg0, jdoubleArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyLong(jstring arg0, jlongArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyString(jstring arg0, jarray arg1);
		android::app::appsearch::GenericDocument_Builder setScore(jint arg0);
		android::app::appsearch::GenericDocument_Builder setTtlMillis(jlong arg0);
	};
} // namespace android::app::appsearch

