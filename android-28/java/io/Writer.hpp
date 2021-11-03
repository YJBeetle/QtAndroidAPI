#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JString;
class JObject;
class JString;

namespace java::io
{
	class Writer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Writer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Writer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::io::Writer nullWriter();
		java::io::Writer append(jchar arg0);
		java::io::Writer append(JString arg0);
		java::io::Writer append(JString arg0, jint arg1, jint arg2);
		void close();
		void flush();
		void write(JCharArray arg0);
		void write(jint arg0);
		void write(JString arg0);
		void write(JCharArray arg0, jint arg1, jint arg2);
		void write(JString arg0, jint arg1, jint arg2);
	};
} // namespace java::io

