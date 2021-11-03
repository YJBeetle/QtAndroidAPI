#pragma once

#include "../../JObject.hpp"


namespace java::io
{
	class ObjectOutputStream_PutField : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectOutputStream_PutField(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObjectOutputStream_PutField(QJniObject obj);
		
		// Constructors
		ObjectOutputStream_PutField();
		
		// Methods
		void put(jstring arg0, jboolean arg1);
		void put(jstring arg0, jbyte arg1);
		void put(jstring arg0, jchar arg1);
		void put(jstring arg0, jdouble arg1);
		void put(jstring arg0, jfloat arg1);
		void put(jstring arg0, jint arg1);
		void put(jstring arg0, jobject arg1);
		void put(jstring arg0, jlong arg1);
		void put(jstring arg0, jshort arg1);
		void write(JObject arg0);
	};
} // namespace java::io

