#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class AppSearchSchema : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		JObject getProperties();
		jstring getSchemaType();
		jint hashCode();
		jstring toString();
	};
} // namespace android::app::appsearch

