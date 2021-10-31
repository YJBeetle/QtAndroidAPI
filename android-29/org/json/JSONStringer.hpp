#pragma once

#include "../../__JniBaseClass.hpp"


namespace org::json
{
	class JSONStringer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JSONStringer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JSONStringer(QAndroidJniObject obj);
		
		// Constructors
		JSONStringer();
		
		// Methods
		QAndroidJniObject array();
		QAndroidJniObject endArray();
		QAndroidJniObject endObject();
		QAndroidJniObject key(jstring arg0);
		QAndroidJniObject object();
		jstring toString();
		QAndroidJniObject value(jboolean arg0);
		QAndroidJniObject value(jdouble arg0);
		QAndroidJniObject value(jobject arg0);
		QAndroidJniObject value(jlong arg0);
	};
} // namespace org::json

