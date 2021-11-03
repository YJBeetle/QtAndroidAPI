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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Writer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Writer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::io::Writer nullWriter();
		java::io::Writer append(jchar arg0) const;
		java::io::Writer append(JString arg0) const;
		java::io::Writer append(JString arg0, jint arg1, jint arg2) const;
		void close() const;
		void flush() const;
		void write(JCharArray arg0) const;
		void write(jint arg0) const;
		void write(JString arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

