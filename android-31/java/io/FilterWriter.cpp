#include "../../JCharArray.hpp"
#include "./Writer.hpp"
#include "../../JString.hpp"
#include "./FilterWriter.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	FilterWriter::FilterWriter(QJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	
	// Methods
	void FilterWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void FilterWriter::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FilterWriter::write(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void FilterWriter::write(JString arg0, jint arg1, jint arg2)
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

