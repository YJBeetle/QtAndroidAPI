#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::app::appsearch::observer
{
	class DocumentChangeInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentChangeInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentChangeInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DocumentChangeInfo(JString arg0, JString arg1, JString arg2, JString arg3, JObject arg4);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getChangedDocumentIds() const;
		JString getDatabaseName() const;
		JString getNamespace() const;
		JString getPackageName() const;
		JString getSchemaName() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::app::appsearch::observer

