#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class UrlQuerySanitizer : public __JniBaseClass
	{
	public:
		// Fields
		
		UrlQuerySanitizer(QAndroidJniObject obj);
		// Constructors
		UrlQuerySanitizer();
		UrlQuerySanitizer(jstring arg0);
		
		// Methods
		static QAndroidJniObject getAllButNulAndAngleBracketsLegal();
		static QAndroidJniObject getAllButNulLegal();
		static QAndroidJniObject getAllButWhitespaceLegal();
		static QAndroidJniObject getAllIllegal();
		static QAndroidJniObject getAmpAndSpaceLegal();
		static QAndroidJniObject getAmpLegal();
		static QAndroidJniObject getSpaceLegal();
		static QAndroidJniObject getUrlAndSpaceLegal();
		static QAndroidJniObject getUrlLegal();
		jboolean getAllowUnregisteredParamaters();
		QAndroidJniObject getEffectiveValueSanitizer(jstring arg0);
		QAndroidJniObject getParameterList();
		QAndroidJniObject getParameterSet();
		jboolean getPreferFirstRepeatedParameter();
		QAndroidJniObject getUnregisteredParameterValueSanitizer();
		jstring getValue(jstring arg0);
		QAndroidJniObject getValueSanitizer(jstring arg0);
		jboolean hasParameter(jstring arg0);
		void parseQuery(jstring arg0);
		void parseUrl(jstring arg0);
		void registerParameter(jstring arg0, __JniBaseClass arg1);
		void registerParameters(jarray arg0, __JniBaseClass arg1);
		void setAllowUnregisteredParamaters(jboolean arg0);
		void setPreferFirstRepeatedParameter(jboolean arg0);
		void setUnregisteredParameterValueSanitizer(__JniBaseClass arg0);
		jstring unescape(jstring arg0);
	};
} // namespace android::net

