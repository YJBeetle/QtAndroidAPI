#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::service::autofill
{
	class FieldClassification_Match : public __JniBaseClass
	{
	public:
		// Fields
		
		FieldClassification_Match(QAndroidJniObject obj);
		// Constructors
		FieldClassification_Match() = default;
		
		// Methods
		jstring getCategoryId();
		jfloat getScore();
		jstring toString();
	};
} // namespace android::service::autofill

