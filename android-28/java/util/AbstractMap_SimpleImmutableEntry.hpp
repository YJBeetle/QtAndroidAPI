#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class AbstractMap_SimpleImmutableEntry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractMap_SimpleImmutableEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractMap_SimpleImmutableEntry(QJniObject obj);
		
		// Constructors
		AbstractMap_SimpleImmutableEntry(JObject arg0);
		AbstractMap_SimpleImmutableEntry(jobject arg0, jobject arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getKey();
		jobject getValue();
		jint hashCode();
		jobject setValue(jobject arg0);
		jstring toString();
	};
} // namespace java::util

