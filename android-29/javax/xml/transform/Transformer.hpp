#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class Properties;
}

namespace javax::xml::transform
{
	class Transformer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Transformer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Transformer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void clearParameters();
		QAndroidJniObject getErrorListener();
		QAndroidJniObject getOutputProperties();
		jstring getOutputProperty(jstring arg0);
		jobject getParameter(jstring arg0);
		QAndroidJniObject getURIResolver();
		void reset();
		void setErrorListener(__JniBaseClass arg0);
		void setOutputProperties(java::util::Properties arg0);
		void setOutputProperty(jstring arg0, jstring arg1);
		void setParameter(jstring arg0, jobject arg1);
		void setURIResolver(__JniBaseClass arg0);
		void transform(__JniBaseClass arg0, __JniBaseClass arg1);
	};
} // namespace javax::xml::transform

