#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class ArrayList;
}

namespace android::service::autofill
{
	class FieldClassification : public __JniBaseClass
	{
	public:
		// Fields
		
		FieldClassification(QAndroidJniObject obj);
		// Constructors
		FieldClassification() = default;
		
		// Methods
		QAndroidJniObject getMatches();
		jstring toString();
	};
} // namespace android::service::autofill

