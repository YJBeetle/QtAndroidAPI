#pragma once

#include "../../JObject.hpp"


namespace android::net
{
	class UrlQuerySanitizer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlQuerySanitizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UrlQuerySanitizer(QJniObject obj);
		
		// Constructors
		UrlQuerySanitizer();
		UrlQuerySanitizer(jstring arg0);
		
		// Methods
		static JObject getAllButNulAndAngleBracketsLegal();
		static JObject getAllButNulLegal();
		static JObject getAllButWhitespaceLegal();
		static JObject getAllIllegal();
		static JObject getAmpAndSpaceLegal();
		static JObject getAmpLegal();
		static JObject getSpaceLegal();
		static JObject getUrlAndSpaceLegal();
		static JObject getUrlLegal();
		jboolean getAllowUnregisteredParamaters();
		JObject getEffectiveValueSanitizer(jstring arg0);
		JObject getParameterList();
		JObject getParameterSet();
		jboolean getPreferFirstRepeatedParameter();
		JObject getUnregisteredParameterValueSanitizer();
		jstring getValue(jstring arg0);
		JObject getValueSanitizer(jstring arg0);
		jboolean hasParameter(jstring arg0);
		void parseQuery(jstring arg0);
		void parseUrl(jstring arg0);
		void registerParameter(jstring arg0, JObject arg1);
		void registerParameters(jarray arg0, JObject arg1);
		void setAllowUnregisteredParamaters(jboolean arg0);
		void setPreferFirstRepeatedParameter(jboolean arg0);
		void setUnregisteredParameterValueSanitizer(JObject arg0);
		jstring unescape(jstring arg0);
	};
} // namespace android::net

