#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class UrlQuerySanitizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UrlQuerySanitizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UrlQuerySanitizer(QAndroidJniObject obj);
		
		// Constructors
		UrlQuerySanitizer();
		UrlQuerySanitizer(jstring arg0);
		
		// Methods
		static __JniBaseClass getAllButNulAndAngleBracketsLegal();
		static __JniBaseClass getAllButNulLegal();
		static __JniBaseClass getAllButWhitespaceLegal();
		static __JniBaseClass getAllIllegal();
		static __JniBaseClass getAmpAndSpaceLegal();
		static __JniBaseClass getAmpLegal();
		static __JniBaseClass getSpaceLegal();
		static __JniBaseClass getUrlAndSpaceLegal();
		static __JniBaseClass getUrlLegal();
		jboolean getAllowUnregisteredParamaters();
		__JniBaseClass getEffectiveValueSanitizer(jstring arg0);
		__JniBaseClass getParameterList();
		__JniBaseClass getParameterSet();
		jboolean getPreferFirstRepeatedParameter();
		__JniBaseClass getUnregisteredParameterValueSanitizer();
		jstring getValue(jstring arg0);
		__JniBaseClass getValueSanitizer(jstring arg0);
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

