#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::autofill
{
	class FieldClassification_Match : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldClassification_Match(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FieldClassification_Match(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getCategoryId();
		jfloat getScore();
		jstring toString();
	};
} // namespace android::service::autofill

