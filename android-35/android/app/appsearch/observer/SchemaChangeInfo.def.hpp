#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::app::appsearch::observer
{
	class SchemaChangeInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SchemaChangeInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SchemaChangeInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SchemaChangeInfo(JString arg0, JString arg1, JObject arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getChangedSchemaNames() const;
		JString getDatabaseName() const;
		JString getPackageName() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::app::appsearch::observer

