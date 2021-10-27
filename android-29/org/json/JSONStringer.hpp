#pragma once

#include "../../__JniBaseClass.hpp"


namespace org::json
{
	class JSONStringer : public __JniBaseClass
	{
	public:
		// Fields
		
		JSONStringer(QAndroidJniObject obj);
		// Constructors
		JSONStringer();
		
		// Methods
		QAndroidJniObject array();
		QAndroidJniObject endArray();
		QAndroidJniObject endObject();
		QAndroidJniObject key(jstring arg0);
		QAndroidJniObject key(const QString &arg0);
		QAndroidJniObject object();
		jstring toString();
		QAndroidJniObject value(jboolean arg0);
		QAndroidJniObject value(jdouble arg0);
		QAndroidJniObject value(jobject arg0);
		QAndroidJniObject value(jlong arg0);
	};
} // namespace org::json

