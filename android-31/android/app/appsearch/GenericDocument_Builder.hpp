#pragma once

#include "../../../JObject.hpp"

class JDoubleArray;
class JLongArray;
class JArray;
class JArray;
class JBooleanArray;
class JArray;
namespace android::app::appsearch
{
	class GenericDocument;
}
class JString;

namespace android::app::appsearch
{
	class GenericDocument_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GenericDocument_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GenericDocument_Builder(QJniObject obj);
		
		// Constructors
		GenericDocument_Builder(JString arg0, JString arg1, JString arg2);
		
		// Methods
		android::app::appsearch::GenericDocument build();
		android::app::appsearch::GenericDocument_Builder setCreationTimestampMillis(jlong arg0);
		android::app::appsearch::GenericDocument_Builder setPropertyBoolean(JString arg0, JBooleanArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyBytes(JString arg0, JArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyDocument(JString arg0, JArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyDouble(JString arg0, JDoubleArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyLong(JString arg0, JLongArray arg1);
		android::app::appsearch::GenericDocument_Builder setPropertyString(JString arg0, JArray arg1);
		android::app::appsearch::GenericDocument_Builder setScore(jint arg0);
		android::app::appsearch::GenericDocument_Builder setTtlMillis(jlong arg0);
	};
} // namespace android::app::appsearch

