#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::validation
{
	class Validator : public __JniBaseClass
	{
	public:
		// Fields
		
		Validator(QAndroidJniObject obj);
		// Constructors
		Validator() = default;
		
		// Methods
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jobject getProperty(jstring arg0);
		QAndroidJniObject getResourceResolver();
		void reset();
		void setErrorHandler(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setResourceResolver(__JniBaseClass arg0);
		void validate(__JniBaseClass arg0);
		void validate(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace javax::xml::validation

