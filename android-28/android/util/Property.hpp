#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Property : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Property(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Property(QJniObject obj);
		
		// Constructors
		Property(jclass arg0, jstring arg1);
		
		// Methods
		static android::util::Property of(jclass arg0, jclass arg1, jstring arg2);
		jobject get(jobject arg0);
		jstring getName();
		jclass getType();
		jboolean isReadOnly();
		void set(jobject arg0, jobject arg1);
	};
} // namespace android::util

