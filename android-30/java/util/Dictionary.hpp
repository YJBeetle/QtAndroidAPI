#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class Dictionary : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Dictionary(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Dictionary(QJniObject obj);
		
		// Constructors
		Dictionary();
		
		// Methods
		JObject elements();
		jobject get(jobject arg0);
		jboolean isEmpty();
		JObject keys();
		jobject put(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jint size();
	};
} // namespace java::util

