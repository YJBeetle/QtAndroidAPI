#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::xml::validation
{
	class TypeInfoProvider;
}

namespace javax::xml::validation
{
	class ValidatorHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ValidatorHandler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ValidatorHandler(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getContentHandler();
		QAndroidJniObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jobject getProperty(jstring arg0);
		QAndroidJniObject getResourceResolver();
		QAndroidJniObject getTypeInfoProvider();
		void setContentHandler(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
		void setResourceResolver(__JniBaseClass arg0);
	};
} // namespace javax::xml::validation

