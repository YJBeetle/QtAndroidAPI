#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view::textclassifier
{
	class TextClassificationContext;
}

namespace android::view::textclassifier
{
	class TextClassificationManager : public __JniBaseClass
	{
	public:
		// Fields
		
		TextClassificationManager(QAndroidJniObject obj);
		// Constructors
		TextClassificationManager() = default;
		
		// Methods
		QAndroidJniObject createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0);
		QAndroidJniObject getTextClassifier();
		void setTextClassificationSessionFactory(__JniBaseClass arg0);
		void setTextClassifier(__JniBaseClass arg0);
	};
} // namespace android::view::textclassifier

