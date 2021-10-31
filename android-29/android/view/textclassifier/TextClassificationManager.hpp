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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassificationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0);
		QAndroidJniObject getTextClassifier();
		void setTextClassificationSessionFactory(__JniBaseClass arg0);
		void setTextClassifier(__JniBaseClass arg0);
	};
} // namespace android::view::textclassifier

