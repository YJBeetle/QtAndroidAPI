#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::validation
{
	class Validator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Validator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Validator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getErrorHandler();
		jboolean getFeature(jstring arg0);
		jobject getProperty(jstring arg0);
		__JniBaseClass getResourceResolver();
		void reset();
		void setErrorHandler(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setResourceResolver(__JniBaseClass arg0);
		void validate(__JniBaseClass arg0);
		void validate(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace javax::xml::validation

