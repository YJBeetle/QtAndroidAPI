#pragma once

#include "../../../JObject.hpp"


namespace android::service::autofill
{
	class FieldClassification : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FieldClassification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldClassification(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getMatches();
		jstring toString();
	};
} // namespace android::service::autofill

