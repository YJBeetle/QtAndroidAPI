#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

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
		jboolean equals(JObject arg0);
		JObject getProperties();
		JString getSchemaType();
		jint hashCode();
		JString toString();
	};
} // namespace android::app::appsearch

