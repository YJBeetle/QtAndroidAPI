#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Writer.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	Writer::Writer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::io::Writer Writer::nullWriter()
	{
		return callStaticObjectMethod(
			"java.io.Writer",
			"nullWriter",
			"()Ljava/io/Writer;"
		);
	}
	java::io::Writer Writer::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/io/Writer;",
			arg0
		);
	}
	java::io::Writer Writer::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0.object<jstring>()
		);
	}
	java::io::Writer Writer::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void Writer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Writer::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void Writer::write(JCharArray arg0) const
	{
		callMethod<void>(
			"write",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	void Writer::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void Writer::write(JString arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Writer::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void Writer::write(JString arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

