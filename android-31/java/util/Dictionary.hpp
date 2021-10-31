#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Dictionary : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Dictionary(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Dictionary(QJniObject obj);
		
		// Constructors
		Dictionary();
		
		// Methods
		__JniBaseClass elements();
		jobject get(jobject arg0);
		jboolean isEmpty();
		__JniBaseClass keys();
		jobject put(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jint size();
	};
} // namespace java::util

