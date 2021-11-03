#pragma once

#include "../../../JObject.hpp"


namespace android::service::autofill
{
	class FieldClassification_Match : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldClassification_Match(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldClassification_Match(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getCategoryId();
		jfloat getScore();
		jstring toString();
	};
} // namespace android::service::autofill

