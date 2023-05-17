
public class Aluno {

	private int rgm; // CHAVE PRIMARIA
	private String nome;
		
	public int getRgm() {
		return rgm;
	}
	public void setRgm(int rgm) {
		this.rgm = rgm;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public void setDados (int matricula, String novoNome) {
		rgm = matricula;
		nome = novoNome;
	}

}


