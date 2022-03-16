#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class RemoveByDocumentIdRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoveByDocumentIdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveByDocumentIdRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getIds() const;
		JString getNamespace() const;
	};
} // namespace android::app::appsearch

