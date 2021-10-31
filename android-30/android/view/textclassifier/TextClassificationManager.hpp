#pragma once

#include "../../../__JniBaseClass.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassificationManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassificationManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass createTextClassificationSession(android::view::textclassifier::TextClassificationContext arg0);
		__JniBaseClass getTextClassifier();
		void setTextClassificationSessionFactory(__JniBaseClass arg0);
		void setTextClassifier(__JniBaseClass arg0);
	};
} // namespace android::view::textclassifier

