#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::service::autofill
{
	class FieldClassification_Match : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FieldClassification_Match(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldClassification_Match(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getCategoryId() const;
		jfloat getScore() const;
		JString toString() const;
	};
} // namespace android::service::autofill

